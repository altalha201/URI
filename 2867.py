'''2867	Digits'''

c = int(input())
while c:
    n, m = [int(x) for x in input().split()]
    n = str(n ** m)
    print(len(n))
    c = c-1