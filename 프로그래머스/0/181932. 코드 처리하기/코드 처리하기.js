function solution(code) {
    let mode = 0
    return [...code].reduce((a, c, i) => {
        if(mode) {
            if(c !== '1' && i%2 === 1)  return a+c
            if(c === '1') mode = 0
        } else {
            if(c !== '1' && i%2 === 0)  return a+c
            if(c === '1') mode = 1
        }
            
        return a
    }, "") || "EMPTY"
}