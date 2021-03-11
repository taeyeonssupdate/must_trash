# 範例請勿直接抄 加一點你自己的東西格式註解之類的 要不就抄襲0分 #
---
## Java語言
* 開啟程式左上角New>Project>empty project
* name:檔案名稱請填學號或老師指定名稱
* 一直按Next,finall
* 看到左邊bar有自己的專案按右鍵New>File>empty java file 名稱請填name
* 複製範例貼上 把public static main 名稱(String args[]){ 的名稱 改成你的name
* Ctrl+S儲存 F5 run一次
* 理解內容 用自己的方式格式註解再重打一次避免0分

```java
public class Test0304 {
    public static void main(String[] args) {
        A objA = new A(0);
        System.out.println(objA.a);
        System.out.println(objA.s);
        A.getCount();
    }
}

class A {
    int a = 10;
    String s = "Java";
    static int count = 0;

    A(int a, String s) {
        this.a = a;
        this.s = s;
        count++;
    }

    A(int a) {
        this(a, "CSIE");
    }

    void print() {
        System.out.println(s + " " + a);
    }

    static int getCount() {
        return count;
    }
}
```