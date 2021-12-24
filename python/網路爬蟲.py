import requests
from bs4 import BeautifulSoup

r = requests.get('https://search.books.com.tw/search/query/key/python%20%E5%85%A5%E9%96%80/cat/all')
soup = BeautifulSoup(r.text, 'html.parser')
for table in soup.find_all('table', id="itemlist_table", class_="table-searchlist clearfix"):
    for index, tbody in enumerate(table.find_all('tbody')):
        print(f"{index+1} {tbody.find_all('td')[2].find('a').text} {tbody.find_all('td')[2].find('ul', class_='list-nav clearfix').find_all('strong')[-1].text}")
