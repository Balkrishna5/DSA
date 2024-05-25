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
        self.__trans=None

    def size(self):
        return self.__size 

    def isEmpty(self):
        return self.size() == 0   #.__ is not use bzc we are calling fxn
    
    def append(self,data):
        newnode = Node(data)
        if self.isEmpty():
            self.__head=newnode
            self.__tail=newnode
        else:
            self.__tail.next=newnode
            newnode.prev=self.__tail
            self.__tail=newnode  
        self.__size+=1 

    def __str__(self):
        
        l=[]
        trav=self.__head
        while(trav is not None):
            l.append(trav.data)      #l.append(str(tran.data))
            trav=trav.next
        return '<---->'.join(map(str,l))   #join(l)

    def addFirst(self,data):
        newnode  = Node(data)
        if self.isEmpty():
            self.__head=newnode
            self.__tail=newnode
        else:
            newnode.next=self.__head 
            self.__head.prev=newnode
            self.__head=newnode 
        self.__size+=1      

    def addAt(self,index,data):
        if index<0 or index>self.size():
            raise Exception("Invalid Index")
        if index==0 :
            self.addFirst(data)
        elif index==self.size():
            self.append(data) 
        else:  
            id=0
            trans=self.__head     
            while (id!=(index-1)):
                id+=1
                trans=trans.next
            newnode = Node(data,trans,trans.next)
            trans.next=newnode
            newnode.next.prev=newnode  
        self.__size+=1   

    def removeFirst(self):

        if self.size() == 0:
            raise Exception("INVALID")
        else:
            temp=self.__head
            self.__head=self.__head.next
            self.head.prev=None
            del temp
            self.__size-=1
    
    def removeLast(self):
        
        if self.size() == 0:
            raise Exception("INVALID")
        else:
            temp=self.__tail
            self.__tail=self.__tail.prev
            self.tail.next=None
            del temp
        self.__size-=1   

    def removeAt(self,index):
        if index<0 or index>self.size():
            raise Exception("Invalid Index")  
        if index==0:
            self.removeFirst(index)
        elif index==(self.__size-1) :
            self.removeLast(index)
        else:
            idx = 0
            trans=self.__head
            while idx!=(index-1):
                idx+=1
                trans=trans.next
            temp=trans.next    
            trans.next=trans.next.next
            trans.next.next.prev=trans
            del temp
            self.__size-=1

    def __iter__(self):
        self.__trans=self.__head
        return self
    
    def __next__(self):
        x = self.trans.data
        if(trans.next is None):
            


l = DLL()
print(l.size())  
print(l.isEmpty())  
print(l.append(7))
print(l)
print(l.size()) 
print(l.isEmpty())  
print(l.append(8))
print(l)
# print(l.size()) 
# print(l.isEmpty()) 
# print(l.append(9))
# print(l)
# print(l.size()) 
# print(l.isEmpty()) 
# print(l.append(13))
# print(l)
# print(l.addFirst(122))
# print(l.size()) 
# print(l.isEmpty()) 
# print(l.append(13))
# print(l)
# print(l.addAt(3,1144))
# print(l.size()) 
# print(l)

