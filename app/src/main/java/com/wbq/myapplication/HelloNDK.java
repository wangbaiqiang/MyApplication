package com.wbq.myapplication;

/**
 * 作者：${wbq} on 2016/12/13 15:25
 * 邮箱：wangbaiqiang@heigo.com.cn
 */

public class HelloNDK {
    public static native String sayHelloNDK();
    static {
        System.loadLibrary("HelloNDK");
    }
}
