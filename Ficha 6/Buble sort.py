def bubbleSort(alist):
    for x in range(len(alist)-1):
        for i in range(x):
            if alist[i]>alist[i+1]:
                maior = alist[i]
                alist[i] = alist[i+1]
                alist[i+1] = maior

alist = [54,26,93,17,77,31,44,55,20]
bubbleSort(alist)
print(alist)