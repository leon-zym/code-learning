let lineNum = 0
const rawArr = []

while (line = readline()) {
    if (!lineNum) {
        lineNum = line
    } else {
        rawArr.push(line)
    }
}

solution(rawArr)

function judge(tuple) {
    if ((tuple[0] % tuple[1]) === 0) {
        return 'YES'
    } else {
        return 'NO'
    }
}

function solution(rawArr) {
    rawArr.forEach(item => {
        const tuple = item.split(" ")
        let res = judge(tuple)
        console.log(res)
    })
}