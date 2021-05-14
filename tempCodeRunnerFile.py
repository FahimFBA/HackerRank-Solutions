if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    avg = float(sum(scores) / len(scores)) # For average of the list named score, we need the sum / len of the list
    print(avg)