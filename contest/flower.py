from typing import List
def final_size(days: List[int])->int:
    flower_size = 1
    for i in range(len(days)):
        if (i<=len(days)-2) and (days[i]==0) and (days[i+1]==0):
            return -1
        elif (i>=2) and (days[i]==1) and (days[i-1]==1):
            flower_size += 5
        elif days[i] == 1:
            flower_size += 1
    return flower_size


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        days = list(map(int, input().split()))
        print(final_size(days))