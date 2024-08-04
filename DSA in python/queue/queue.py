class Node:
    def __init__(self,data,next = None):
        self.data = data
        self.next = next

class Queue:
    def __init__(self):
        self.__size = 0
        self.__head = None 
        self.__tail = None 
        self.__iter = None  

    def size(self):
        return self.__size
    
    def isEmpty(self):
        return self.size() == 0
    
    def enqueue(self,data):
        if self.isEmpty():
            self.__head = self.__tail = Node(data)
        else:
            self.__tail.next = Node(data)
            self.__tail = Node(data)
        self.__size += 1
    
    def dequeue(self,data):
        if self.isEmpty():
            raise Exception("queue is empty")
        else:
            temp = self.__head
            self.__head=self.__head.next
            del temp
        self.__size += 1    




    