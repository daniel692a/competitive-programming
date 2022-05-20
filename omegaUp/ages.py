
if __name__ == "__main__":
    ages = [x for x in input().split()]
    set_ages = set()
    for age in ages:
        set_ages.add(age)
    print([age for age in sorted(set_ages, reverse=True)])