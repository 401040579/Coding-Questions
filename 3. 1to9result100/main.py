# Name: Ran Tao
# Date: 5/30/2018
# Question: 1,2,3,4,5,6,7,8,9 Add ‘+’, ‘-’ so that the result is equal to 100
# 
# Answer: Loop through each operator ->
#         then go to the next level node ->
#         all the way to the last node (17) ->
#         then go back to the previous level and continue to loop through the next operator ->
#         completely iterate over all nodes

def fun(arr):
    if len(arr) == 17:
        e = ''.join(arr)
        if(eval(e) == 100):
            print(e)
    else:
        x = int(arr[-1])
        for sign in ("+","-",""):
            arr.append(sign)
            arr.append(str(x + 1))
            fun(arr)
            arr.pop()
            arr.pop()
            
fun(['1'])
