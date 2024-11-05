def intersection(s1,s2):
    if s1[1] > s2[0]:
        return (max(s1[0],s2[0]),min(s1[1],s2[1]))
    return ()

def solution(targets):
    answer = 1
    targets.sort(key=lambda x: x[0])
    inter = [-1,1e9+1]
    for target in targets:
        inter = intersection(inter,target)
        if not inter:
            inter = target
            answer+=1
    return answer
