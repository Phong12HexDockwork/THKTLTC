f = @(x) x.^3 + 2*x - 10;
fplot(f, [-3, 2]);
grid on;
xlabel('x');
ylabel('f(x)');
title('Đồ thị hàm số y = x^3 + 2x - 10');
