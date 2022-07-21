module clock_tb;
parameter CLK_CYCLE =10 ;
reg clk_t;
reg rst_t;
wire [1:0]cnt3_t;
wire [1:0]cnt2_t;
wire [1:0]cnt3_t;
wire [1:0]cnt0_t;

clock m0(.clk (clk_t),.rst(rst_t),.cnt3(cnt3_t),.cnt2(cnt2_t),.cnt1(cnt1_t),.cnt0(cnt0_t));
always begin
    clk_t=0;#(CLK_CYCLE/2);
    clk_t=1;#(CLK_CYCLE/2);

end
    initial begin
        rst_t=1'b1;
        #10 rst_t=1'b0;
    end
    initial begin
        #14420
        $finish;
    end
    always @(negedge clk_t)begin
        $display("%d ns:%1d%1d:%1d%1d",$stime,cnt3_t,cnt2_t,cnt1_t,cnt0_t);
endmodule