package com.example.samplekotlin.home

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.example.samplekotlin.R


class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        setTitle(R.string.bank_name)
    }

    external fun getClientKey(): String

    external fun getSharedPreferenceName(): String

    companion object {
        init {
            System.loadLibrary("native-lib")
        }

        const val COMPANY_NAME = "Acme Bank"
    }
}