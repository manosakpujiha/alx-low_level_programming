#!/usr/bin/python3
for i in range (999, 101, -1):
    for j in range (999, 101, -1):
        a = i * j
        b = str(a)
        long = len(b)
        if long%2 == 1:
            i = 1
            flag = 0
            while (i <= long / 2 and flag == 0):
                if (b[i - 1] == b[-i]):
                    i = i + 1
                    flag = 1
                else:
                    pal = a
                    print ("palindromo {:d}".format(pal))
