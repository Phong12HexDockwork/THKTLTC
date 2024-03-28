function main()
    x0 = graphMethod();
    fprintf('x0=  %f\n', x0);

    [x_l, iter_l] = loopMethod(x0);
    fprintf('phuong phap lap: %f\n', x_l);
    fprintf('so lan lap %d\n', iter_l);

    x_n = newtonMethod(x0);
    fprintf('phuong phap newton: f\n', x_n);
end
