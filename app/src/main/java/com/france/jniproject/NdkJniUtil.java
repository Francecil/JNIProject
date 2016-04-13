package com.france.jniproject;

/**
 * Created by Administrator on 2016/4/13.
 */
public class NdkJniUtil {
    public native String getCString();

    static {
        System.loadLibrary("gahing");
    }
}
