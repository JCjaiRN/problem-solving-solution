def average(array):
    # your code goes here
    sumarr = sum(set(array))
    lenarr = len(set(array))
    output = sumarr/lenarr
    return output
        

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)