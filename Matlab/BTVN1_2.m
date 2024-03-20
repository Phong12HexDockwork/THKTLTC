function [x1, x2, delta, D] = quadraticEquation(a, b, c)
  % Kiểm tra hệ số a
  if a == 0
    error('Hệ số a không được bằng 0');
  end

  % Tính delta
  delta = b^2 - 4*a*c;

  % Biện luận và tính nghiệm
  if delta > 0
    % Phương trình có hai nghiệm phân biệt
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    D = 'Hai nghiệm phân biệt';
  elseif delta == 0
    % Phương trình có nghiệm kép
    x1 = x2 = -b / (2*a);
    D = 'Nghiệm kép';
  else
    % Phương trình vô nghiệm
    x1 = x2 = NaN;
    D = 'Vô nghiệm';
  end
end
