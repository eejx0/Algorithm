function solution(num_list) {
    const a = num_list.reduce((c, d) => c*d);
    const b = num_list.reduce((c, d) => c+d);
    if (a<b*b) {
        return 1;
    } else {
        return 0;
    }
}