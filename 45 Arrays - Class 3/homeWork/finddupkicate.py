arr=[1,2,3,4,1]

for i in arr:
  for j in arr:
    if i==j:
      print(i)
      arr.remove(i)