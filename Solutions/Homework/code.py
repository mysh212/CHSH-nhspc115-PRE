# Author : ysh
# 2026/04/28 Tue 10:51:45
f = []
while True:
    try:
        a, b = [int(i) for i in input().split()[-2:]]
        f.append([a, b])
    except:
        break

n = len(f)
mark = [False for _ in range(n)]
# print(f)

def check(x: int, now: int = 0, sig: int = 0) -> int:
    if x == n:
        return sig
    
    ans = 10 ** 18
    
    for i in range(n):
        if mark[i]:
            continue

        mark[i] = True

        ans = min(check(x + 1, now + f[i][0], sig + max(0, now + f[i][0] - f[i][1])), ans)

        mark[i] = False

    return ans

print(check(0))
quit()