n = input()
n = int(n)
d = {}

for i in range(n):
    tmp = input()
    # print(type(tmp))
    if tmp in d :
        d[tmp] += 1
    else :
        d[tmp] = 1

sd = sorted(d.items(), key=lambda x:x[1], reverse=True)

num = 0
l =[]
for k in sd:
    if k[1] < num:
        break
    num = k[1]
    l.append(k[0])

l.sort()

for n in l:
    print(n)
