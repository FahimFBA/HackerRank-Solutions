N = int(input())  # input() gets the whole line, int() converts from string to int
dictionary = {}  # dictionaries appear to work the same as objects in javascript
for i in range(0, N):
    inputArray = input().split()
    # okay this line is cool, converts indices 1->end of inputArray to floats, puts them in a list
    # getting the sum of everything from the index 1 to the end. (ignoring the name in the list for the sum value)
    marks = list(map(float, inputArray[1:]))
    # sum(marks) adds up everything in marks
    dictionary[inputArray[0]] = sum(marks)/float(len(marks))
# print(output) formatted to 2 decimal places
print("%.2f" % dictionary[input()])
