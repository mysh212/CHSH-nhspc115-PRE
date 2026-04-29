# Author : ysh
# 2026/04/28 Tue 11:29:56
t = 0
while True:
    try:
        n = input().split()
        a, b = [int(i) for i in n[-2:]]

        assert(1 <= a <= 10 ** 9)
        assert(1 <= b <= 10 ** 9)

        name = ' '.join(n[:-2])
        assert(len(name) <= 100)

        t += 1
        assert(t <= 2 * (10 ** 5))
    except EOFError as e:
        quit()