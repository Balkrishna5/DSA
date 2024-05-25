class Node:
    def __init__(self,data,next=None):
        self.data=data
        self.next=next

class SLL:
    def __init__(self):
        self.__size=0
        self.__head=None
        self.__tail=None
        self.__iter=None

    def __len__(self):
        return self.__size    
    
    def clear(self):
        return None
    
    def size(self):
        return self.__size
    
    def isEmpty(self):
        return self.size() == 0
    
    def append(self,data):
        if self.isEmpty():
            self.__head = self.__tail = Node(data,None)
        else:
            self.__tail.next = Node(data,None)
            self.__tail=self.__tail.next
        self.__size += 1   

    def addlast(self,data):
        self.append(data)

    def addfirst(self,data):
        if self.isEmpty():
            self.__head = self.__tail = Node(data,None)
        else:
            self.__head.prev = Node(data,self.__head)
            self.__head=self.__head.prev
        self.__size +=1        

    def addAt(self,index,data):
        if index < 0  or  index > self.size() :
            raise Exception("Invalid Indez") 
        if index == 0 :
            self.addFirst(data)
        if index == (self.__size() - 1) :
            self.addlast(data) 
        else:
            trans = self.__head
            for i in range(0,index-1):
                trans = trans.next
            newnode = Node(data,trans.next)
            trans.next = newnode  
        self.__size +=1   
    
    def peekfirst(self):
        if self.isEmpty():
            raise Exception('Empty List')
        return self.__head.data   
    
    def peeklast(self):
        if self.isEmpty():
            raise Exception('Empty list')
        return self.tail.data
    
    def removefirst(self):
        if self.isEmpty() :
            raise Exception('Empty List')
        else:
            temp =  self.__head
            self.__head = self.__head.next
            self.head.prev = None
            del temp
            self.__size-=1

    def removelast(self):
        if self.isEmpty() :
            raise Exception('Empty List')  
        else:
            temp=self.__tail
            self.__tail=self.__tail.prev
            self.tail.next=None
            del temp
        self.__size-=1  

    def removeAt(self,index):
        if index < 0  or index > self.size():
            raise Exception("Invalid Index")
        if index == 0:
            self.removefirst(index)
        elif index == (self.__size-1):
            self.removelast(index)
        else:
            idx = 0
            trans = self.__head
            while(idx <= (index-1)):
                idx+=1
                trans=trans.next
            temp = trans.next
            trans.next = trans.next.next
            del temp
            self.__size-=1

    def indexOf(self,data):
        trans = self.__head
        index = 0
        while trans is not None :
            if trans.data == data:
                return  index   
            trans = trans.next
            index+=1
        return -1

    def contains(self,data):
        self.indexOf(data)

    def __iter__(self):
        self.__iter = self.__head
        return self

    def __next__(self):
        if self.__iter is None :
            raise StopIteration
        data = self.__iter.data
        self.__iter = self.__iter.next
        return data
    
    def __str__(self):
        l = list()
        trans = self.__head
        while trans is None :
            l.append(trans.data)
            trans = trans.next
        return '<->'.join(map(str,l))                       





