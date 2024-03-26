function main()
  while true
    
    ch = input('Nhập lựa chọn (1, 2, 3 hoặc 0 để thoát): ');
    switch ch
      case 1
        chia_doi_khoang_cach(a, b);
      case 2
        lap(a, b);
      case 3
        newton(a, b);
      case 0
        fprintf('Thoát chương trình\n');
        break;
      otherwise
        fprintf('Lựa chọn không hợp lệ. Vui lòng nhập lại.\n');
    end
  end
end
