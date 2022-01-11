db = {}
point_list = []
n = int(input())

for i in range(0, n):
    candidate = list(input().split(" "))
    candidate_point = int(candidate[0])
    candidate_ID = str(candidate[1])
    db[candidate_point] = candidate_ID
    point_list.append(candidate_point)

for i in range(0, len(point_list) - 1):
    for j in range(i + 1, len(point_list)):
        if point_list[i] < point_list[j]:
            point_list[i], point_list[j] = point_list[j], point_list[i]

for point in point_list:
    print(point, db[point])
