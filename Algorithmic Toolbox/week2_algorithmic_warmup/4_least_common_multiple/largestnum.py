from itertools import permutations 
def largest(l): 
    lst = [] 
    for i in permutations(l, len(l)): 
        # provides all permutations of the list values, 
        # store them in list to find max 
        lst.append("".join(map(str,i)))  
    return max(lst) 
  
print(largest([532,517,581,569,57,5,52]))