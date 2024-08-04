class Stack:
    def __init__(s):
        s.stack=[]
    def push(s,item):
        s.stack.extend([item])
    # def push(self, item):
    #     self.stack.append(item)
    def pop(self):
        if not self.is_empty():
            return self.stack.pop()
        else:
            return None

    def is_empty(self):
        return len(self.stack) == 0

    def peek(self):
        if not self.is_empty():
            return self.stack[-1]
        else:
            return None

    def size(self):
        return len(self.stack)

    def __str__(self):
        return str(self.stack)
stack = Stack()
stack.push(1)
stack.push(2)
stack.push(3)
print(stack)
