def firstOccurance(arr, size, target):
  start=0
  end=size-1
  mid=int((start+end)/2)

  while (start<=end):
    ele=arr[mid]
    if ele==target:
      index=mid
      end=mid-1
    elif target<ele:
      end=mid-1
    else:
      start=mid+1
    mid=int((start+end)/2)
  return index

arr=[1,2,3,4,4,4,5,6,7,8]
target=4
size=len(arr)
index=firstOccurance(arr,size,target)

if index==-1:
  print("Target Not Found")
else:
  print(f'found at index {index}')
