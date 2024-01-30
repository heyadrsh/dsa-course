arr=[22,23,24,25,26,28, 29, 31]
temp=arr[0]-1

for i in arr:
  temp+=1
  if temp==i:
    continue
  if temp!=i:
    print(temp)
    temp+=1

