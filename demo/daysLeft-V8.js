// const readline = require('readline')
// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// })

const rawDate = []

// rl.on('line', line => {
//     rawDate.push(line)
// })
// rl.on('close', () => {
//     handleDate(rawDate)
// })

while (line = readline()) {
    rawDate.push(line)
}

handleDate(rawDate)

function handleIsRunYear(year) {
    if ((year % 4 === 0) && (year % 100 !== 0)) {
        return true
    } else if (year % 400 === 0) {
        return true
    } else {
        return false
    }
}

function convertDate(dateStr) {
    const dateArr = dateStr.split('/')
    let year = parseInt(dateArr[0])
    let month = parseInt(dateArr[1])
    let day = parseInt(dateArr[2])
    
    const month31 = [1, 3, 5, 7, 8, 10, 12]
    let month31Left = month31.indexOf(month) === -1 ? (month31.indexOf(month - 1) + 1) : month31.indexOf(month)
    let isRunYear = handleIsRunYear(year)
    let pastDays = -1
    
    if (isRunYear && month > 2) {
        pastDays = (month - 1) * 30 + month31Left - 1 + day
    } else if (isRunYear && month <= 2) {
        pastDays = (month - 1) * 30 + month31Left + day
    } else if (!isRunYear && month > 2) {
        pastDays = (month - 1) * 30 + month31Left - 2 + day
    } else {
        pastDays = (month - 1) * 30 + month31Left + day
    }
    
    return pastDays
}

function handleDate(rawDate) {
    rawDate.forEach(item => {
        let pastDays = convertDate(item)
        console.log(pastDays)
    })
}
