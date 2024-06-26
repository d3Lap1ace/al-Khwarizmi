package com.dataStucture.link;

/**
    @classname LinkedList
    @Auther d3Lap1ace
    @Time 2024/03/20:下午7:40
    @Version 1.0
                        From the Laplace Demon 
*/
public class LinkedList {


    public Node head; // 定义一个头结点
    private int pos = 0;// 节点的位置

    //初始化
    public LinkedList() {
        this.head = null;
    }

    // 插入一个头节点
    public void addFirstNode(int data) {
        Node node = new Node(data);
        node.next = head;
        head = node;
    }

    // 删除一个头结点,并返回头结点
    public Node deleteFirstNode() {
        Node tempNode = head;
        head = tempNode.next;
        return tempNode;
    }

    // 在任意位置插入节点 在index的后面插入
    public void add(int index, int data) {
        Node node = new Node(data);
        Node current = head;
        Node previous = head;
        while (pos != index) {
            previous = current;
            current = current.next;
            pos++;
        }
        node.next = current;
        previous.next = node;
        pos = 0;
    }

    // 删除任意位置的节点
    public Node deleteByPos(int index) {
        Node current = head;
        Node previous = head;
        while (pos != index) {
            pos++;
            previous = current;
            current = current.next;
        }
        if (current == head) {
            head = head.next;
        } else {
            pos = 0;
            previous.next = current.next;
        }
        return current;
    }

    // 根据节点的data删除节点(仅仅删除第一个)
    public Node deleteByData(int data) {
        Node current = head;
        Node previous = head; // 记住上一个节点
        while (current.data != data) {
            if (current.next == null) {
                return null;
            }
            previous = current;
            current = current.next;
        }
        if (current == head) {
            head = head.next;
        } else {
            previous.next = current.next;
        }
        return current;
    }

    // 显示出所有的节点信息
    public void displayAllNodes() {
        Node current = head;
        while (current != null) {
            current.display();
            current = current.next;
        }
        System.out.println();
    }

    // 根据位置查找节点信息
    public Node findByPos(int index) {
        Node current = head;
        if (pos != index) {
            current = current.next;
            pos++;
        }
        return current;
    }

    // 根据数据查找节点信息
    public Node findByData(int data) {
        Node current = head;
        while (current.data != data) {
            if (current.next == null)
                return null;
            current = current.next;
        }
        return current;
    }
}