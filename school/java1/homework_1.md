# 僅供參考 #
資訊工程係  Java 程式設計  第一次作業  
班級：資工二乙 學號：B08170516   姓名：李知恩  

題目：撰寫一個程式,依序分行列印下列訊息.  
說明：依序分行列印下列訊息  
1. 班級名稱
2. 學號
3. 姓名
4. 行動電話
5. e-mail

若因個人資料因素,第4, 5項可列印自行編撰之資料.  
惟其仍須符合其應有之標準格式.  

---

## 流程圖 ##
<!-- ```flow
start=>start: 開始
out1=>inputoutput: 班級名稱
out2=>inputoutput: 學號
out3=>inputoutput: 姓名
out4=>inputoutput: 行動電話
out5=>inputoutput: e-mail
end=>end: 結束
start->out1->out2->out3->out4->out5->end
``` -->
<img src="https://github.com/taeyeonssupdate/zerojudge/blob/master/images/homework_1_flowchart.png?raw=true" width="190">

---

## 程式碼 ##

```java
/*
    filename:homework_1
    function:print some text

    author:taeyeonssupdate
    time:2020/10/04
*/
public class homework_1 {
    public static void main(String[] args) {
        System.out.println("1.資訊工程系"); //印出班級名稱
        System.out.println("2.B08170XXX"); //印出學號
        System.out.println("3.XXX"); //印出姓名
        System.out.println("4.0800096000"); //印出電話
        System.out.println("5.id@gmail.com"); //印出e-mail
    }
}
```