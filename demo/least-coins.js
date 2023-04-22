// 贪心算法解决

function change(N) {
  const coins = [10, 5, 2]; // 面额从大到小排列
  const counts = [0, 0, 0]; // 记录每种硬币使用的数量

  for (let i = 0; i < coins.length; i++) {
    counts[i] = Math.floor(N / coins[i]);
    N -= counts[i] * coins[i];
    if (N === 0) {
      break;
    }
  }

  return N === 0 ? counts : null;
}

change(58)