package com.jbloit.linktest

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        LinkWrapper.create()

        button.setOnClickListener {
            val tempo = LinkWrapper.getTempo()
            val phase = LinkWrapper.getPhase()
            textView.text = "tempo : $tempo, phase: $phase"
        }
        button_enable.setOnClickListener {
            LinkWrapper.setEnable()
        }
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */


    companion object {

        // Used to load the 'native-lib' library on application startup.
        init {
            System.loadLibrary("native-lib")
        }
    }
}
