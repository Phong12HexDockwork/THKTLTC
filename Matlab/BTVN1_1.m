function sumOddNumbers(n)
  % Khởi tạo biến tổng
  sum = 0;

  % Duyệt từ 1 đến n
  for i = 1:n
    % Kiểm tra nếu i là số lẻ
    if mod(i, 2) == 1
      % Cộng i vào tổng
      sum = sum + i;
    end
  end

  % Hiển thị kết quả
  fprintf('Tổng các số lẻ từ 1 đến %d là: %d\n', n, sum);
end
