module alarm_clock_tb;
parameter CLK_CYCLE=10;

reg clk_t;
reg rst_t;

reg [1:0] hr1_t;
reg [1:0] hr0_t;
reg [1:0] min1_t;
reg [1:0] min0_t;

wire [1:0] cnt3_t;
wire [1:0] cnt2_t;
wire [1:0] cnt1_t;
wire [1:0] cnt0_t;

wire led_on_t;

alarm_clock m0(.clk(clk_t),.rst(rst_t),.hr1(hr1_t),.hr0(hr0_t),.min1(min1_t),.min0(min0_t),.cnt3(cnt3_t),.cnt2(cnt2_t),.cnt1(cnt1_t),.cnt0(cnt0_t),.led_on(led_on_t));

always begin
    clk_t=0;#(CLK_CYCLE/2);
    clk_t=1;#(CLK_CYCLE/2);
end

initial begin
     rst_t=1'b1;
     {hr1_t,hr0_t,min1_t,min0_t}={2'd0,4'd0,3'd0,4'd0};
     #10 
     rst_t=1'b0;
end

initial begin
    fork
        begin
            #0
            {hr1_t,hr0_t}={2'd0,4'd3};
            {min1_t,min0_t}={3'd5,4'd5};
        end

        begin
            #14400
            {hr1_t,hr0_t}={2'd1,4'd6};
            {min1_t,min0_t}={3'd0,4'd8};
        end
        begin
            #28800
            {hr1_t,hr0_t}={2'd2,4'd3};
            {min1_t,min0_t}={3'd5,4'd57};
        end
        begin
            #44400
            $finish;
        end
    join

        
    end
always @(negedge clk_t)begin
    if(led_on_t=1'b1)
    $display("%d ns:%1d%1d:%1d%1d=>led on",$stime,cnt3_t,cnt2_t,cnt1_t,cnt0_t);
end
endmodule

