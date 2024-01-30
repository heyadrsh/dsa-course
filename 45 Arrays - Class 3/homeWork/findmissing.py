arr=[22,23,24,25,26,22,28,29,31]
brr=[33,34,35,36,37,38,31,39,40]
crr=[41,42,43,44,45,31,46,47,48]

for i in range(len(arr)):
  for j in range(len(brr)):
    if arr[i]==brr[j]:
      for k in range(len(crr)):
        if brr[j]==crr[k]:
          print(crr[k])