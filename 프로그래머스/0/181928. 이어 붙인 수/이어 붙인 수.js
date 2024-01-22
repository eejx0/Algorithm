function solution(num_list) {
    let solve1 = num_list.filter(el => (el%2===1));
    let solve2 = num_list.filter(el => (el%2===0));
    
    return Number(solve1.join(''))+Number(solve2.join(''));
}