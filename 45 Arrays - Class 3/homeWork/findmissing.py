arr=[22,23,24,25,26,22,28,29, 31]
temp=arr[0]-1

for i in range(len(arr)):
  for j in range(len(arr)):
    if arr[i]==arr[j]:
      print(arr[i])
      break