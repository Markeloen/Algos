

class ListNode:
    def __init__(self, val, next_node=None):
        self.val = val
        self.next = next_node
        
        
        
        

class LinkedList:
    def __init__(self):
        self.head = ListNode(-1)
        self.tail = self.head
        
        
    
    def get(self, index: int) -> int:
        pass

    def insertHead(self, val: int) -> None:
        tmp = self.head.next
        self.head = ListNode(val)
        self.head.next = tmp

    def insertTail(self, val: int) -> None:
        pass

    def remove(self, index: int) -> bool:
        pass

    def getValues(self) -> List[int]:
        pass


def main():
    pass

if __name__ == "__main__":
    main()