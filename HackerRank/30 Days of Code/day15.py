class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Solution:
    def display(self, head):
        current = head
        while current:
            print(current.data, end=' ')
            current = current.next

    def insert(self, head, data):
        if head == None:
            head = Node(data)
            return head

        temp = head
        while temp.next != None:
            temp = temp.next
        temp.next = Node(data)
        return head


mylist = Solution()
