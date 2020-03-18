import requests
from bs4 import BeautifulSoup


basic_url = 'https://www.facebook.com/ads/library/?active_status=all&ad_type=all&country=ALL&impression_search_field=has_impressions_lifetime&view_all_page_id=203799399639778'
url2 = 'https://www.facebook.com/ads/library/async/search_ads/?session_id=2868e3c8-0d70-4c9e-aff9-222a52aeb494&count=30&active_status=all&ad_type=all&countries[0]=ALL&impression_search_field=has_impressions_lifetime&view_all_page_id=203799399639778'
headers = {
    'user-agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.130 Safari/537.36'
}
cookie = 'cookie: sb=w0SBXFBDlOYPH_FaEdk-0V_3; datr=w0SBXEKOc7o1Q6Uwqgr5Lf6s; c_user=100003157577098; xs=6%3AodleZaVThYbrAg%3A2%3A1568970714%3A2796%3A11299; dpr=2.5; spin=r.1001660640_b.trunk_t.1580439943_s.1_v.2_; presence=EDvF3EtimeF1580447029EuserFA21B03157577098A2EstateFDutF1580447029741CEchFDp_5f1B03157577098F0CC; _fbp=fb.1.1580448419027.1550080752; fr=1uQ0LFipbp7WN66Mq.AWURMoVUD0C4zU3Cy6ynymcL4L8.BcgUTD._q.F4y.0.0.BeM8J2.AWUngLeZ; act=1580450576665%2F2; m_pixel_ratio=2.5; wd=907x1045'
cookies = {}


payload = {
    'session_id':'2868e3c8-0d70-4c9e-aff9-222a52aeb494',
    'count': '30',
    'active_status': 'all',
    'ad_type': 'all',
    'countries[0]': 'ALL',
    'impression_search_field': 'has_impressions_lifetime',
    'view_all_page_id': '203799399639778',
}

for line in cookie.split(';'):  # 按照字符：进行划分读取
    #其设置为1就会把字符串拆分成2份
    name, value = line.strip().split('=', 1)
    cookies[name] = value


r = requests.post(url2, headers=headers, cookies = cookies)
print(r)
soup = BeautifulSoup(r.text, 'lxml')
print(soup.prettify())
