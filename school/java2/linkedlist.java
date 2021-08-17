import java.util.*;

public class linkedlist {
    Number head;

    void printLink() {
        Number temp = head;
        while (temp != null) {
            System.out.print(temp.value + " ");
            temp = temp.next;
        }
        temp = null;
    }

    public static void main(String args[]) {
        linkedlist link = new linkedlist();
        Random rand = new Random();
        for (int i = 0; i < 10; i++) {
            Number node = new Number(rand.nextInt(100) + 1);
            node.addNumber(link);
        }
        link.printLink();
    }
}

class Number {
    int value;
    Number next = null;

    Number(int value) {
        this.value = value;
    }

    void addNumber(linkedlist link) {
        if (link.head == null || this.value < link.head.value) {
            this.next = link.head;
            link.head = this;
            return;
        }
        Number current = link.head;
        while (current.next != null && this.value > current.next.value) {
            current = current.next;
        }
        this.next = current.next;
        current.next = this;
        current = null;
    }
}