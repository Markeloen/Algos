


class Node:
    def __init__(self, val, next_node = None):
        self.val = val
        self.next = next_node

class LinkedList:
    
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0
    
    def get(self, index: int) -> int:
        if not self.head or index >= self.size or (index == 0 and self.size ==0):
            return -1
        tmp = self.head
        counter = 0
        while(counter != index):
            tmp = tmp.next
            counter += 1
        return tmp.val




    def insertHead(self, val: int) -> None:
        if self.size:
            self.head = Node(val, self.head)
        else:
            self.head = Node(val, self.head)
            self.tail = self.head
        self.size += 1
        

    def insertTail(self, val: int) -> None:
        new_node = Node(val)
        if self.size:
            self.tail.next = new_node
            self.tail = new_node
        else:
            self.head = Node(val, self.head)
            self.tail = self.head
        self.size += 1

    def remove(self, index: int) -> bool:
        if index > self.size:
            return False
        if index == 0:
            self.head = self.head.next
            return True
        

        tmp = self.head
        counter = 1
        while counter != index:
            tmp = tmp.next
            counter +=1

        tmp.next = tmp.next.next
        return True
        
        

    def getValues(self) -> list[int]:
        vals = []

        tmp = self.head
        while(tmp):
            vals.append(tmp.val)
            tmp = tmp.next
        return vals

def main():
    a = LinkedList()
    a.insertHead(1)
    print(a.remove(0))
    
    # a.insertHead(3)
    # a.insertHead(4)
    # a.insertHead(5)
    # a.insertHead(5)
    # a.insertTail(7)
    # a.insertTail(5)
    # print(a.getValues())
    # print(a.remove(6))
    # print(a.getValues())

    a.get(0)
    

if __name__ == "__main__":
    main()