class Node:
    def __init__(self,data,prev=None,next=None):
        self.data=data
        self.prev=prev
        self.next=next

class DLL:
    def __init__(self):
        self.__head=None
        self.__tail=None
        self.__size=0

    def size(self):
        return self.__size    
    
    def isEmpty(self):
        return self.size() == 0
    
    def append(self,data):
        newnode = Node(data)
        if self.isEmpty():
            self.__head=newnode
            self.__tai=newnode
        else:
    



    
