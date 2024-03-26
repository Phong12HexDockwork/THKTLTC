function main()
  while true
    % Yêu cầu người dùng nhập lựa chọn
    ch = input('Nhập lựa chọn (1, 2, 3 hoặc 0 để thoát): ');

    % Xử lý lựa chọn
    switch ch
      case '1'
        fprintf('Phương pháp chia đôi khoảng cách\n');
        chia_doi_khoang_cach(a, b);
      case '2'
        fprintf('Phương pháp lặp\n');
        lap(a, b);
      case '3'
        fprintf('Phương pháp Newton\n');
        newton(a, b);
      case '0'
        fprintf('Thoát chương trình\n');
        break;
      otherwise
        fprintf('Lựa chọn không hợp lệ. Vui lòng nhập lại.\n');
    end
  end
end
