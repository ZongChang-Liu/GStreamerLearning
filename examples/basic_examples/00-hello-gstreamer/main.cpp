//
// Created by Zongchang_Liu on 2026/2/1 15:27.
// Email zongchang.smile@gmail.com
//

#include <iostream>
#include <gst/gst.h>

static int main_func(int argc, char *argv[]) {
    // Initialize GStreamer
    gst_init(&argc, &argv);

    // Print Hello, GStreamer! to the console
    std::cout << "Hello, GStreamer! " << std::endl;
    std::cout << "GStreamer Version: "
            << GST_VERSION_MAJOR << "."
            << GST_VERSION_MINOR << "."
            << GST_VERSION_MICRO << std::endl;

    // Create a simple pipeline
    GstElement *pipeline = gst_parse_launch("videotestsrc ! autovideosink ! audiotestsrc ! autoaudiosink", nullptr);
    if (!pipeline) {
        std::cerr << "Failed to create pipeline." << std::endl;
        return -1;
    }

    // Start playing the pipeline
    gst_element_set_state(pipeline, GST_STATE_PLAYING);

    std::cout << "Pipeline is playing. Close the video window to exit." << std::endl;

    // Wait until error or EOS
    GstBus *bus = gst_element_get_bus(pipeline);
    GstMessage *msg = gst_bus_timed_pop_filtered(bus, GST_CLOCK_TIME_NONE,
                                                    static_cast<GstMessageType>(GST_MESSAGE_ERROR | GST_MESSAGE_EOS));

    // Parse message
    if (msg != nullptr) {
        gst_message_unref(msg);
    }

    // Clean up
    gst_object_unref(bus);
    gst_element_set_state(pipeline, GST_STATE_NULL);
    gst_object_unref(pipeline);

    return 0;
}

int main(const int argc, char *argv[]) {
#ifdef __APPLE__
    gst_macos_main(reinterpret_cast<GstMainFunc>(main_func), argc, argv, NULL);
#else
    main_func(argc, argv);
#endif
    return 0;
}
