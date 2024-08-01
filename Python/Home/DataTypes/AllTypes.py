#number data type

a=5
b=5.5
c=5+3j
print(a)
print(b)
print(c)

#string data type

a="hello"
b='hello'
print(a)
print(b)

#list data type
print("list data type")
a=[1,2,3,4,5]
print(a)
b=[1,2,3,4,5,"hello"]
print(b)
c=[1,2,3,4,5,"hello",[1,2,3,4,5]]
print(c)
d=[1,2,3,4,5,"hello",[1,2,3,4,5],(1,2,3,4,5)]
print(d)

#tuple data type
print("tuple data type")
a=(1,2,3,4,5)
print(a)
b=(1,2,3,4,5,"hello")
print(b)
c=(1,2,3,4,5,"hello",[1,2,3,4,5])
print(c)
d=(1,2,3,4,5,"hello",[1,2,3,4,5],(1,2,3,4,5))
print(d)
e=(1,2,3,4,5,"hello",[1,2,3,4,5],(1,2,3,4,5),{1,2,3,4,5})
print(e)

#set data type
print("set data type")
a={1,2,3,4,5}
print(a)
b={1,2,3,4,5,"hello"}
print(b)
c={1,2,3,4,5,"hello",[1,2,3,4,5]}
print(c)
d={1,2,3,4,5,"hello",list[1,2,3,4,5],tuple(1,2,3,4,5)}
print(d)
# e={1,2,3,4,5,"hello",[1,2,3,4,5],(1,2,3,4,5),{1,2,3,4,5}}
# print(e)

#dictionary data type
a={1:"one",2:"two",3:"three"}
print(a)
b={1:"one",2:"two",3:"three","four":4}
print(b)
c={1:"one",2:"two",3:"three","four":4,"five":[1,2,3,4,5]}
print(c)
d={1:"one",2:"two",3:"three","four":4,"five":[1,2,3,4,5],"six":(1,2,3,4,5)}
print(d)
e={1:"one",2:"two",3:"three","four":4,"five":[1,2,3,4,5],"six":(1,2,3,4,5),"seven":{1,2,3,4,5}}
print(e)

#boolean data type
a=True
print(a)
b=False
print(b)

#bytes data type
a=b"hello"
print(a)
b=bytes(5)
print(b)
c=bytearray(5)
print(c)
d=memoryview(bytes(5))
print(d)

#range data type
a=range(5)
print(a)
b=range(1,5)
print(b)
c=range(1,5,2)
print(c)

#None data type
a=None
print(a)

#NotImplemented data type
a=NotImplemented
print(a)

#Ellipsis data type
a=Ellipsis
print(a)

#frozenset data type
a=frozenset({1,2,3,4,5})
print(a)

#complex data type
a=5+3j
print(a)


