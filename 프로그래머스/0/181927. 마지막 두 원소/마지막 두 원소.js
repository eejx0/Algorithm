function solution(num_list) {
    let last = num_list[num_list.length - 1];
    let last1 = num_list[num_list.length - 2];

    if (last > last1) {
        return num_list.concat([last - last1]);
    } else {
        num_list.push(last * 2);
        return num_list;
    }
}